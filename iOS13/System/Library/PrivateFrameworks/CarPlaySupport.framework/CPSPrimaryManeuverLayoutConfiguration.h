/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(unsigned long long)layout;
-(void)setLayout:(unsigned long long)arg1 ;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(UIImage *)symbolImage;
-(void)setSymbolImage:(UIImage *)arg1 ;
-(UIImage *)junctionImage;
-(void)setJunctionImage:(UIImage *)arg1 ;
-(NSAttributedString *)attributedInstruction;
-(void)setAttributedInstruction:(NSAttributedString *)arg1 ;
-(id)_layoutString;
@end

