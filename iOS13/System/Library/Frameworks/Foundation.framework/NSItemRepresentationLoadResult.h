/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)resultWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(/*^block*/id)arg3 error:(id)arg4 ;
+(id)resultWithError:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(NSError *)error;
-(void)setData:(NSData *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSSecurityScopedURLWrapper *)urlWrapper;
-(BOOL)wasOpenedInPlace;
-(void)setArchivedObjectClassName:(NSString *)arg1 ;
-(NSString *)archivedObjectClassName;
-(id)cleanupHandler;
-(void)setUrlWrapper:(NSSecurityScopedURLWrapper *)arg1 ;
-(void)setCleanupHandler:(id)arg1 ;
-(void)setWasOpenedInPlace:(BOOL)arg1 ;
-(id)copyWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(/*^block*/id)arg3 error:(id)arg4 ;
@end

