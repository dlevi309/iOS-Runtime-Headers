/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUILayoutRequest.h>

@class NSAttributedString, NSString;

@interface SKUIAttributedStringLayoutRequest : NSObject <SKUILayoutRequest> {

	NSAttributedString* _attributedString;
	long long _numberOfLines;
	BOOL _wantsBaselineOffset;
	double _width;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                              //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) BOOL wantsBaselineOffset;                             //@synthesize wantsBaselineOffset=_wantsBaselineOffset - In the implementation block
@property (assign,nonatomic) double width;                                         //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class layoutClass; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(NSAttributedString *)attributedString;
-(BOOL)wantsBaselineOffset;
-(void)setWantsBaselineOffset:(BOOL)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(long long)numberOfLines;
-(Class)layoutClass;
@end

