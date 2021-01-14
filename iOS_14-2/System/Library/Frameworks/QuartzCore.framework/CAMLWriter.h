/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)baseURL;
-(void)beginPropertyElement:(id)arg1 ;
-(id<CAMLWriterDelegate>)delegate;
-(void)beginElement:(unsigned)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setDelegate:(id<CAMLWriterDelegate>)arg1 ;
-(void)_writeElementTree:(CAMLWriterElement*)arg1 ;
-(void)encodeObject:(id)arg1 conditionally:(BOOL)arg2 ;
-(id)URLStringForResource:(id)arg1 ;
-(void)endElement;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setElementAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)setElementContent:(id)arg1 ;
-(void)dealloc;
@end

