/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSNumber;

@interface DIAttributeImageCaptureRequirements : NSObject <NSSecureCoding> {

	unsigned long long _selection;
	unsigned long long _minHeight;
	unsigned long long _minWidth;
	unsigned long long _preferredHeight;
	unsigned long long _preferredWidth;
	unsigned long long _ratioHeight;
	unsigned long long _ratioWidth;
	unsigned long long _minBorderPadding;
	NSArray* _supportedEncoding;
	NSString* _userMessage;
	NSNumber* _maximumCompressionRatio;

}

@property (assign,nonatomic) unsigned long long selection;                     //@synthesize selection=_selection - In the implementation block
@property (assign,nonatomic) unsigned long long minHeight;                     //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) unsigned long long minWidth;                      //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) unsigned long long preferredHeight;               //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) unsigned long long preferredWidth;                //@synthesize preferredWidth=_preferredWidth - In the implementation block
@property (assign,nonatomic) unsigned long long ratioHeight;                   //@synthesize ratioHeight=_ratioHeight - In the implementation block
@property (assign,nonatomic) unsigned long long ratioWidth;                    //@synthesize ratioWidth=_ratioWidth - In the implementation block
@property (assign,nonatomic) unsigned long long minBorderPadding;              //@synthesize minBorderPadding=_minBorderPadding - In the implementation block
@property (nonatomic,retain) NSNumber * maximumCompressionRatio;               //@synthesize maximumCompressionRatio=_maximumCompressionRatio - In the implementation block
@property (nonatomic,copy) NSString * userMessage;                             //@synthesize userMessage=_userMessage - In the implementation block
@property (nonatomic,copy) NSArray * supportedEncoding;                        //@synthesize supportedEncoding=_supportedEncoding - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)minWidth;
-(void)setMinWidth:(unsigned long long)arg1 ;
-(unsigned long long)minHeight;
-(void)setMinHeight:(unsigned long long)arg1 ;
-(unsigned long long)preferredHeight;
-(void)setPreferredHeight:(unsigned long long)arg1 ;
-(unsigned long long)selection;
-(unsigned long long)preferredWidth;
-(void)setSelection:(unsigned long long)arg1 ;
-(NSString *)userMessage;
-(void)setUserMessage:(NSString *)arg1 ;
-(void)setPreferredWidth:(unsigned long long)arg1 ;
-(unsigned long long)ratioHeight;
-(void)setRatioHeight:(unsigned long long)arg1 ;
-(unsigned long long)ratioWidth;
-(void)setRatioWidth:(unsigned long long)arg1 ;
-(unsigned long long)minBorderPadding;
-(void)setMinBorderPadding:(unsigned long long)arg1 ;
-(NSArray *)supportedEncoding;
-(void)setSupportedEncoding:(NSArray *)arg1 ;
-(NSNumber *)maximumCompressionRatio;
-(void)setMaximumCompressionRatio:(NSNumber *)arg1 ;
@end

