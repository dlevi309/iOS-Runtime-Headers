/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUTITypes:(id)arg1;
-(NSArray *)contentText;
-(NSArray *)UTITypes;
-(NSArray *)photoIDs;
-(void)setContentText:(id)arg1;
-(void)setPhotoIDs:(id)arg1;
-(NSArray *)cloudPhotoIDs;
-(void)setCloudPhotoIDs:(id)arg1;
-(void)setContentURLs:(id)arg1;
-(NSArray *)contentURLs;

@end

