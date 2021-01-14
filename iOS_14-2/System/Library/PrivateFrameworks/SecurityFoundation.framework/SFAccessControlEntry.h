/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)canRead;
-(BOOL)isOwner;
-(void)setCanWrite:(BOOL)arg1 ;
-(void)setOwner:(BOOL)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canWrite;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBundleID:(id)arg1 owner:(BOOL)arg2 canRead:(BOOL)arg3 canWrite:(BOOL)arg4 ;
-(void)setCanRead:(BOOL)arg1 ;
@end

