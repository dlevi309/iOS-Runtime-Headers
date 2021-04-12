/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSSecurityScopedURLWrapper, NSError, NSString;

@interface NSItemRepresentationLoadResult : NSObject <NSCopying> {

	BOOL _wasOpenedInPlace;
	NSData* _data;
	NSSecurityScopedURLWrapper* _urlWrapper;
	/*^block*/id _cleanupHandler;
	NSError* _error;
	NSString* _archivedObjectClassName;

}

@property (nonatomic,copy) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSSecurityScopedURLWrapper * urlWrapper;              //@synthesize urlWrapper=_urlWrapper - In the implementation block
@property (nonatomic,copy) id cleanupHandler;                                      //@synthesize cleanupHandler=_cleanupHandler - In the implementation block
@property (nonatomic,copy) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * archivedObjectClassName;                     //@synthesize archivedObjectClassName=_archivedObjectClassName - In the implementation block
@property (assign,nonatomic) BOOL wasOpenedInPlace;                                //@synthesize wasOpenedInPlace=_wasOpenedInPlace - In the implementation block
+(id)resultWithError:(id)arg1 ;
+(id)resultWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(id)copyWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(NSSecurityScopedURLWrapper *)urlWrapper;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setData:(NSData *)arg1 ;
-(void)setArchivedObjectClassName:(NSString *)arg1 ;
-(id)cleanupHandler;
-(BOOL)wasOpenedInPlace;
-(NSData *)data;
-(void)setUrlWrapper:(NSSecurityScopedURLWrapper *)arg1 ;
-(void)setWasOpenedInPlace:(BOOL)arg1 ;
-(NSString *)archivedObjectClassName;
-(void)setCleanupHandler:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

