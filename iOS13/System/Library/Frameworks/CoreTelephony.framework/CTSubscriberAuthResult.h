/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CTSubscriberAuthResult : NSObject <NSSecureCoding> {

	NSData* _auts;
	NSData* _res;
	NSData* _sres;
	NSData* _kc;
	NSData* _ck;
	NSData* _ik;

}

@property (nonatomic,retain) NSData * auts;              //@synthesize auts=_auts - In the implementation block
@property (nonatomic,retain) NSData * res;               //@synthesize res=_res - In the implementation block
@property (nonatomic,retain) NSData * sres;              //@synthesize sres=_sres - In the implementation block
@property (nonatomic,retain) NSData * kc;                //@synthesize kc=_kc - In the implementation block
@property (nonatomic,retain) NSData * ck;                //@synthesize ck=_ck - In the implementation block
@property (nonatomic,retain) NSData * ik;                //@synthesize ik=_ik - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)auts;
-(NSData *)res;
-(NSData *)sres;
-(NSData *)kc;
-(NSData *)ck;
-(NSData *)ik;
-(void)setAuts:(NSData *)arg1 ;
-(void)setRes:(NSData *)arg1 ;
-(void)setSres:(NSData *)arg1 ;
-(void)setKc:(NSData *)arg1 ;
-(void)setCk:(NSData *)arg1 ;
-(void)setIk:(NSData *)arg1 ;
@end

