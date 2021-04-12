/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DEMultipartWriter : NSObject <DEWriter> {

	BOOL _partClosed;
	NSObject*<DEWriter> _writer;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) BOOL partClosed;                         //@synthesize partClosed=_partClosed - In the implementation block
-(NSObject*<DEWriter>)writer;
-(id)init;
-(id)initWithWriter:(id)arg1 ;
-(void)close;
-(void)newPart;
-(void)writeData:(id)arg1 ;
-(void)closeMessage;
-(BOOL)partClosed;
-(void)setPartClosed:(BOOL)arg1 ;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(void)dealloc;
@end

