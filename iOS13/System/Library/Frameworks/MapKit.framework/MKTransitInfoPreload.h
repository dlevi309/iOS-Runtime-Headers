/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
-(id)initWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
@end

