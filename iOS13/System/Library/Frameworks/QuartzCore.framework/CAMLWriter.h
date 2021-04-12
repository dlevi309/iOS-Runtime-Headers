/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL;

@interface CAMLWriter : NSObject {

	CAMLWriterPriv* _priv;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLWriterDelegate> delegate; 
+(id)writerWithData:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id<CAMLWriterDelegate>)delegate;
-(void)setDelegate:(id<CAMLWriterDelegate>)arg1 ;
-(NSURL *)baseURL;
-(void)encodeObject:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)endElement;
-(void)beginPropertyElement:(id)arg1 ;
-(void)setElementAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setElementContent:(id)arg1 ;
-(id)URLStringForResource:(id)arg1 ;
-(void)beginElement:(unsigned)arg1 ;
-(void)encodeObject:(id)arg1 conditionally:(BOOL)arg2 ;
-(void)_writeElementTree:(CAMLWriterElement*)arg1 ;
@end

