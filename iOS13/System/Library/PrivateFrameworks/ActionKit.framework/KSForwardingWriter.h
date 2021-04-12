/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/KSWriter.h>

@protocol KSWriter;
@class NSString;

@interface KSForwardingWriter : NSObject <KSWriter> {

	id<KSWriter> _writer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)close;
-(void)writeString:(id)arg1 ;
-(id)initWithOutputWriter:(id)arg1 ;
@end

