/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKTransitInfoPreload.h>
@class NSAttributedString;


@protocol MKTransitInfoPreload <NSObject>
@property (nonatomic,readonly) NSAttributedString * attributedString; 
@required
-(NSAttributedString *)attributedString;

@end


@class NSAttributedString, NSString;

@interface MKTransitInfoPreload : NSObject <MKTransitInfoPreload> {

	NSAttributedString* _attributedString;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
@end

