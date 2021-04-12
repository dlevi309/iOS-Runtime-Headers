/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
*/


#import <MobileContainerManager/MobileContainerManager-Structs.h>
@class NSString, NSUUID, NSURL, NSDictionary;

@interface MCMContainer : NSObject {

	NSString* _identifier;
	NSUUID* _uuid;
	NSString* _personaUniqueString;
	long long _containerClass;
	container_objectRef _thisContainer;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) container_objectRef thisContainer; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * info; 
@property (nonatomic,readonly) long long containerClass; 
@property (nonatomic,readonly) NSString * personaUniqueString; 
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary; 
+(long long)typeContainerClass;
+(id)containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)containerWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
+(id)temporaryContainerWithIdentifier:(id)arg1 existed:(BOOL*)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSURL *)url;
-(NSUUID *)uuid;
-(NSDictionary *)info;
-(NSString *)personaUniqueString;
-(BOOL)isTemporary;
-(long long)containerClass;
-(void)markDeleted;
-(id)initWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 temp:(BOOL)arg4 error:(id*)arg5 ;
-(id)destroyContainerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)infoValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)recreateDefaultStructureWithError:(id*)arg1 ;
-(BOOL)regenerateDirectoryUUIDWithError:(id*)arg1 ;
-(unsigned long long)diskUsageWithError:(id*)arg1 ;
-(void)_errorOccurred;
-(id)initWithIdentifier:(id)arg1 uuid:(id)arg2 personaUniqueString:(id)arg3 error:(id*)arg4 ;
-(container_objectRef)getLowLevelContainerObject;
-(container_objectRef)thisContainer;
@end

