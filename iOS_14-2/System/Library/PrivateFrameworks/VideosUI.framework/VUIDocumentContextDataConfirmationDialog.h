/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataConfirmationDialog : VUIDocumentContextData {

	NSString* _confirmationDialogType;
	NSString* _name;

}

@property (nonatomic,copy) NSString * confirmationDialogType;              //@synthesize confirmationDialogType=_confirmationDialogType - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
-(id)jsonData;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setConfirmationDialogType:(NSString *)arg1 ;
-(NSString *)confirmationDialogType;
@end

