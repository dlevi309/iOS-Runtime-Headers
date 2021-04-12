/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/WFSyntaxHighlightToken.h>
@class NSString;


@protocol WFSyntaxHighlightToken <JSExport>
@property (assign) BOOL overflows; 
@property (retain) NSString * string; 
@property (assign) int start; 
@property (assign) int length; 
@required
+(id)constructToken;
-(NSString *)string;
-(int)length;
-(void)setLength:(int)arg1;
-(void)setString:(id)arg1;
-(int)start;
-(void)setStart:(int)arg1;
-(BOOL)overflows;
-(void)setOverflows:(BOOL)arg1;

@end


@class NSString;

@interface WFSyntaxHighlightToken : NSObject <WFSyntaxHighlightToken> {

	BOOL _overflows;
	int _start;
	int _length;
	NSString* _string;

}

@property (assign) BOOL overflows;                 //@synthesize overflows=_overflows - In the implementation block
@property (retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign) int start;                      //@synthesize start=_start - In the implementation block
@property (assign) int length;                     //@synthesize length=_length - In the implementation block
+(id)constructToken;
-(NSString *)string;
-(int)length;
-(id)description;
-(void)setLength:(int)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(int)start;
-(NSRange)range;
-(void)setStart:(int)arg1 ;
-(BOOL)overflows;
-(void)setOverflows:(BOOL)arg1 ;
@end

