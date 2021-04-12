/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSXPCServiceConnectionContext : NSObject <NSCopying> {

	NSString* _proem;

}

@property (nonatomic,copy,readonly) NSString * loggingProem;                     //@synthesize proem=_proem - In the implementation block
@property (nonatomic,copy,readonly) NSString * endpointDescription; 
@property (getter=isServer,nonatomic,readonly) BOOL server; 
@property (getter=isClient,nonatomic,readonly) BOOL client; 
@property (getter=isRoot,nonatomic,readonly) BOOL root; 
@property (getter=isChild,nonatomic,readonly) BOOL child; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isServer;
-(BOOL)isRoot;
-(BOOL)isClient;
-(NSString *)loggingProem;
-(BOOL)isChild;
-(NSString *)endpointDescription;
-(id)_initWithProem:(id)arg1 ;
@end

