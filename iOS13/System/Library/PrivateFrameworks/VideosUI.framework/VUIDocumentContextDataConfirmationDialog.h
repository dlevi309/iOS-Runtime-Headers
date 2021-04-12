/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)jsonData;
-(void)setConfirmationDialogType:(NSString *)arg1 ;
-(NSString *)confirmationDialogType;
@end

