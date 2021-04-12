/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSDictionary *)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)hostedURL;
-(BOOL)isZippedBundle;
-(id)initWithHostedURL:(id)arg1 isZippedBundle:(BOOL)arg2 ;
-(BOOL)isEqualToHostedResource:(id)arg1 ;
-(void)setHostedURL:(NSURL *)arg1 ;
-(void)setZippedBundle:(BOOL)arg1 ;
@end

