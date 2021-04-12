/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary;

@interface CRKResource : NSObject <NSSecureCoding> {

	BOOL _zippedBundle;
	NSURL* _hostedURL;

}

@property (nonatomic,retain) NSURL * hostedURL;                                    //@synthesize hostedURL=_hostedURL - In the implementation block
@property (assign,getter=isZippedBundle,nonatomic) BOOL zippedBundle;              //@synthesize zippedBundle=_zippedBundle - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(NSURL *)hostedURL;
-(BOOL)isZippedBundle;
-(id)initWithHostedURL:(id)arg1 isZippedBundle:(BOOL)arg2 ;
-(BOOL)isEqualToHostedResource:(id)arg1 ;
-(void)setHostedURL:(NSURL *)arg1 ;
-(void)setZippedBundle:(BOOL)arg1 ;
@end

