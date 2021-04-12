/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTIDSecretStore.h>

@class NSString, NSURL;

@interface MTIDFileStore : NSObject <MTIDSecretStore> {

	NSString* _containerIdentifier;
	NSURL* _pathURL;

}

@property (nonatomic,retain) NSString * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * pathURL;                             //@synthesize pathURL=_pathURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sanitizeFileName:(id)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSURL *)pathURL;
-(id)debugInfo;
-(id)secretForScheme:(id)arg1 options:(id)arg2 ;
-(void)clearLocalData;
-(id)initWithContainerIdentifer:(id)arg1 ;
-(void)setPathURL:(NSURL *)arg1 ;
-(id)fileURLForScheme:(id)arg1 date:(id)arg2 ;
@end

