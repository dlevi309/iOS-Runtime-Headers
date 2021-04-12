/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OADClient.h>
#import <libobjc.A.dylib/OADTextClient.h>
#import <libobjc.A.dylib/OADLinkedTextClient.h>

@class WDAAnchor, WDATextBox, OADDrawable, NSString;

@interface WDAContent : NSObject <OADClient, OADTextClient, OADLinkedTextClient> {

	WDAAnchor* mAnchor;
	WDATextBox* mTextBox;
	OADDrawable* mDrawable;
	int mTextType;

}

@property (nonatomic,readonly) WDAAnchor * anchor; 
@property (__weak) OADDrawable * drawable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForType:(unsigned short)arg1 ;
-(id)init;
-(NSString *)description;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)floating;
-(WDAAnchor *)anchor;
-(BOOL)hasText;
-(BOOL)hasBounds;
-(BOOL)isLinked;
-(void)clearAnchor;
-(OADDrawable *)drawable;
-(BOOL)isShape;
-(id)textBox;
-(int)textType;
-(unsigned long long)linkedTextBoxSupport;
-(id)createAnchor;
-(id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2 ;
-(void)setTextBox:(id)arg1 document:(id)arg2 ;
-(BOOL)isLine;
-(BOOL)isTopLevelObject;
-(void)setTextType:(int)arg1 ;
-(void)setDrawable:(OADDrawable *)arg1 ;
@end

