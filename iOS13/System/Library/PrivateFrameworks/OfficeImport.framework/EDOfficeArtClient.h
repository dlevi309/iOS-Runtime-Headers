/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>
#import <libobjc.A.dylib/OADTextClient.h>

@class EDSheet, EDAnchor, EDTextBox, EDComment, NSMutableDictionary, NSString;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {

	EDSheet* mSheet;
	id mClientState;
	EDAnchor* mAnchor;
	EDTextBox* mTextBox;
	EDComment* mComment;
	NSMutableDictionary* mTableModels;
	CGRect mBounds;
	BOOL mIsBoundsSet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(id)comment;
-(id)anchor;
-(BOOL)hasText;
-(void)setAnchor:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(BOOL)hasBounds;
-(void)setClientState:(id)arg1 ;
-(id)clientState;
-(id)sheet;
-(id)textBox;
-(BOOL)areBoundsSet;
-(void)setSheet:(id)arg1 ;
-(id)tableModels;
-(void)setTableModels:(id)arg1 ;
-(void)setTextBox:(id)arg1 ;
@end

