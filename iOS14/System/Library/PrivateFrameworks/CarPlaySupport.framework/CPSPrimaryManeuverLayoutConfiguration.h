/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@class NSString, NSAttributedString, UIImage;

@interface CPSPrimaryManeuverLayoutConfiguration : NSObject {

	unsigned long long _layout;
	NSString* _instruction;
	NSAttributedString* _attributedInstruction;
	double _height;
	UIImage* _symbolImage;
	UIImage* _junctionImage;

}

@property (assign,nonatomic) unsigned long long layout;                               //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSString * instruction;                                  //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedInstruction;              //@synthesize attributedInstruction=_attributedInstruction - In the implementation block
@property (assign,nonatomic) double height;                                           //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) UIImage * symbolImage;                                   //@synthesize symbolImage=_symbolImage - In the implementation block
@property (nonatomic,retain) UIImage * junctionImage;                                 //@synthesize junctionImage=_junctionImage - In the implementation block
-(void)setHeight:(double)arg1 ;
-(void)setSymbolImage:(UIImage *)arg1 ;
-(UIImage *)symbolImage;
-(double)height;
-(id)description;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(void)setLayout:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)layout;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(UIImage *)junctionImage;
-(void)setJunctionImage:(UIImage *)arg1 ;
-(NSAttributedString *)attributedInstruction;
-(void)setAttributedInstruction:(NSAttributedString *)arg1 ;
-(id)_layoutString;
@end

