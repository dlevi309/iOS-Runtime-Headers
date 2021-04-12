/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSKDocumentObject.h>
#import <TSReading/TSPCopying.h>

@class TSWPStorage;

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying> {

	TSWPStorage* _parentStorage;
	unsigned long long _lastTableIndex;

}

@property (assign,nonatomic) TSWPStorage * parentStorage;                //@synthesize parentStorage=_parentStorage - In the implementation block
@property (nonatomic,readonly) unsigned attributeArrayKind; 
@property (nonatomic,readonly) int styleAttributeArrayKind; 
@property (nonatomic,readonly) NSRange range; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)defaultFieldStyleIdentifier;
-(void)dealloc;
-(NSRange)range;
-(id)text;
-(id)initWithContext:(id)arg1 ;
-(int)elementKind;
-(BOOL)allowsEditing;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(unsigned)attributeArrayKind;
-(int)styleAttributeArrayKind;
-(BOOL)allowsPasteAsSmartField;
-(BOOL)canCopy:(NSRange)arg1 ;
@end

