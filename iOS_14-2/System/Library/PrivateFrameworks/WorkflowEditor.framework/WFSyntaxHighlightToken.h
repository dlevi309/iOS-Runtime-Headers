/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/WFSyntaxHighlightToken.h>
@class NSString;


@protocol WFSyntaxHighlightToken <JSExport>
@property (assign) BOOL overflows; 
@property (retain) NSString * string; 
@property (assign) int start; 
@property (assign) int length; 
@required
+(id)constructToken;
-(void)setLength:(int)arg1;
-(int)start;
-(int)length;
-(NSString *)string;
-(void)setString:(id)arg1;
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
-(void)setLength:(int)arg1 ;
-(NSRange)range;
-(int)start;
-(int)length;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setStart:(int)arg1 ;
-(BOOL)overflows;
-(void)setOverflows:(BOOL)arg1 ;
@end

