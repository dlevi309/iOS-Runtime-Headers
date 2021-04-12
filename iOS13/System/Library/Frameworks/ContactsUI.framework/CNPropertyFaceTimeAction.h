/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery;

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate> {

	long long _type;
	CNPropertyBestIDSValueQuery* _bestFaceTimeQuery;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestFaceTimeQuery;              //@synthesize bestFaceTimeQuery=_bestFaceTimeQuery - In the implementation block
@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(BOOL)canPerformAction;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(void)queryComplete;
-(void)_queryFaceTimeStatus;
-(CNPropertyBestIDSValueQuery *)bestFaceTimeQuery;
-(void)setBestFaceTimeQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
@end

