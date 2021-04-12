/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>

@class NSArray, NSString;

@interface PXNoContentGadgetProvider : PXGadgetProvider {

	NSArray* _noContentGadgets;
	NSString* _localizedTitle;
	NSString* _localizedMessage;

}

@property (nonatomic,copy) NSArray * noContentGadgets;               //@synthesize noContentGadgets=_noContentGadgets - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedMessage;              //@synthesize localizedMessage=_localizedMessage - In the implementation block
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)generateGadgets;
-(NSString *)localizedTitle;
-(id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 ;
-(NSArray *)noContentGadgets;
-(void)setNoContentGadgets:(NSArray *)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(NSString *)localizedMessage;
@end

