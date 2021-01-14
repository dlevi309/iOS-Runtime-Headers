/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) Class layoutClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)width;
-(void)setNumberOfLines:(long long)arg1 ;
-(Class)layoutClass;
-(NSAttributedString *)attributedString;
-(void)setWidth:(double)arg1 ;
-(void)setWantsBaselineOffset:(BOOL)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
-(BOOL)wantsBaselineOffset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfLines;
@end

