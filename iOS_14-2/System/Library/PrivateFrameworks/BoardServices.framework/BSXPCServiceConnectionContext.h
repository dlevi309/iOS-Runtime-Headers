/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSXPCServiceConnectionContext : NSObject <NSCopying> {

	NSString* _proem;

}

@property (nonatomic,copy,readonly) NSString * endpointDescription; 
@property (getter=isServer,nonatomic,readonly) BOOL server; 
@property (getter=isClient,nonatomic,readonly) BOOL client; 
@property (getter=isRoot,nonatomic,readonly) BOOL root; 
@property (getter=isChild,nonatomic,readonly) BOOL child; 
-(BOOL)isServer;
-(BOOL)isRoot;
-(id)init;
-(BOOL)isChild;
-(NSString *)endpointDescription;
-(BOOL)isClient;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

