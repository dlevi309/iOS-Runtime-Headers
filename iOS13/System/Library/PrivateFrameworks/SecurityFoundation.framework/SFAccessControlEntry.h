/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFAccessControlEntry : NSObject <NSCopying, NSSecureCoding> {

	id _accessControlEntryInternal;

}

@property (nonatomic,copy) NSString * bundleID; 
@property (assign,getter=isOwner,nonatomic) BOOL owner; 
@property (assign,nonatomic) BOOL canRead; 
@property (assign,nonatomic) BOOL canWrite; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOwner:(BOOL)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)isOwner;
-(BOOL)canWrite;
-(BOOL)canRead;
-(id)initWithBundleID:(id)arg1 owner:(BOOL)arg2 canRead:(BOOL)arg3 canWrite:(BOOL)arg4 ;
-(void)setCanRead:(BOOL)arg1 ;
-(void)setCanWrite:(BOOL)arg1 ;
@end

