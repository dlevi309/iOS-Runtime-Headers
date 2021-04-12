/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MADownloadConfig : NSObject <NSSecureCoding> {

	BOOL _discretionary;

}

@property (assign,nonatomic) BOOL discretionary;              //@synthesize discretionary=_discretionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(BOOL)discretionary;
-(void)logConfig;
@end

