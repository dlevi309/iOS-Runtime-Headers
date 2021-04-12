/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

@class NSArray;


@protocol MFMailCompositionAdditionalDonating
@property (nonatomic,copy) NSArray * UTITypes; 
@property (nonatomic,copy) NSArray * photoIDs; 
@property (nonatomic,copy) NSArray * cloudPhotoIDs; 
@property (nonatomic,copy) NSArray * contentText; 
@property (nonatomic,copy) NSArray * contentURLs; 
@required
-(NSArray *)contentText;
-(void)setContentText:(id)arg1;
-(NSArray *)UTITypes;
-(void)setUTITypes:(id)arg1;
-(void)setContentURLs:(id)arg1;
-(void)setPhotoIDs:(id)arg1;
-(void)setCloudPhotoIDs:(id)arg1;
-(NSArray *)photoIDs;
-(NSArray *)cloudPhotoIDs;
-(NSArray *)contentURLs;

@end

