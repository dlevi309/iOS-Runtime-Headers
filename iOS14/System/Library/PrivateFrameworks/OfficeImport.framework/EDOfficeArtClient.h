/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasText;
-(CGRect)bounds;
-(id)comment;
-(void)setComment:(id)arg1 ;
-(id)sheet;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(void)setClientState:(id)arg1 ;
-(id)clientState;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(id)textBox;
-(BOOL)hasBounds;
-(BOOL)areBoundsSet;
-(void)setSheet:(id)arg1 ;
-(id)tableModels;
-(void)setTableModels:(id)arg1 ;
-(void)setTextBox:(id)arg1 ;
@end

