/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasText;
-(CGRect)bounds;
-(id)init;
-(BOOL)floating;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(BOOL)isLine;
-(BOOL)isLinked;
-(WDAAnchor *)anchor;
-(OADDrawable *)drawable;
-(void)clearAnchor;
-(BOOL)isShape;
-(id)textBox;
-(BOOL)hasBounds;
-(int)textType;
-(unsigned long long)linkedTextBoxSupport;
-(id)createAnchor;
-(id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2 ;
-(void)setTextBox:(id)arg1 document:(id)arg2 ;
-(BOOL)isTopLevelObject;
-(void)setTextType:(int)arg1 ;
-(void)setDrawable:(OADDrawable *)arg1 ;
@end

