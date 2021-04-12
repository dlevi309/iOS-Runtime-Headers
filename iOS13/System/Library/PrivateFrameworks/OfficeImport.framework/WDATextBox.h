/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(WDAContent *)parent;
-(void)setParent:(WDAContent *)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setDocument:(WDDocument *)arg1 ;
-(WDDocument *)document;
-(NSNumber *)flowId;
-(void)setFlowId:(NSNumber *)arg1 ;
-(unsigned long long)nextTextBoxId;
-(void)setOle:(BOOL)arg1 ;
-(NSNumber *)flowSequence;
-(BOOL)isMultiColumn;
-(void)setIsMultiColumn:(BOOL)arg1 ;
-(BOOL)isOle;
-(void)setFlowSequence:(NSNumber *)arg1 ;
-(void)setNextTextBoxId:(unsigned long long)arg1 ;
@end

