/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MADownloadConfig : NSObject <NSSecureCoding> {

	BOOL _discretionary;

}

@property (assign,nonatomic) BOOL discretionary;              //@synthesize discretionary=_discretionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDiscretionary:(BOOL)arg1 ;
-(id)init;
-(void)logConfig;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)discretionary;
-(void)dealloc;
@end

