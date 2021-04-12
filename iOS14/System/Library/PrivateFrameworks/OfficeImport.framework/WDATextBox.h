/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDText, WDDocument, WDAContent, NSNumber;

@interface WDATextBox : NSObject {

	WDText* mText;
	unsigned long long mNextTextBoxId;
	BOOL mOle;
	BOOL _isMultiColumn;
	WDDocument* mDocument;
	WDAContent* mParent;
	NSNumber* _flowSequence;
	NSNumber* _flowId;

}

@property (retain) NSNumber * flowSequence;              //@synthesize flowSequence=_flowSequence - In the implementation block
@property (retain) NSNumber * flowId;                    //@synthesize flowId=_flowId - In the implementation block
@property (assign) BOOL isMultiColumn;                   //@synthesize isMultiColumn=_isMultiColumn - In the implementation block
@property (__weak) WDDocument * document; 
@property (__weak) WDAContent * parent; 
-(WDAContent *)parent;
-(id)init;
-(void)setDocument:(WDDocument *)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)isOle;
-(NSNumber *)flowId;
-(void)setParent:(WDAContent *)arg1 ;
-(id)description;
-(id)text;
-(WDDocument *)document;
-(void)setFlowId:(NSNumber *)arg1 ;
-(void)setOle:(BOOL)arg1 ;
-(unsigned long long)nextTextBoxId;
-(NSNumber *)flowSequence;
-(BOOL)isMultiColumn;
-(void)setIsMultiColumn:(BOOL)arg1 ;
-(void)setFlowSequence:(NSNumber *)arg1 ;
-(void)setNextTextBoxId:(unsigned long long)arg1 ;
@end

