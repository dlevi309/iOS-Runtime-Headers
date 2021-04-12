/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <libobjc.A.dylib/MFMessageBodyStringAccumulator.h>

@protocol MFMessageBodyStringAccumulator <NSObject>
@required
-(void)appendString:(id)arg1;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
-(BOOL)isFull;
-(void)appendNewline;
-(void)appendRange:(NSRange)arg1 ofString:(id)arg2;
-(void)appendInnerTextWithConsumableNode:(id)arg1;
-(id)accumulatedString;
-(void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;

@end


@class NSMutableString, NSString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator> {

	NSMutableString* _accumulatedString;
	unsigned long long _remainingLength;
	int _options;
	int _lastEntity;
	unsigned long long _lastCustomEntityTag;
	BOOL _isFull;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isFull;
-(void)appendNewline;
-(void)appendRange:(NSRange)arg1 ofString:(id)arg2 ;
-(id)initWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2 ;
-(void)appendInnerTextWithConsumableNode:(id)arg1 ;
-(id)accumulatedString;
-(void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2 ;
@end

