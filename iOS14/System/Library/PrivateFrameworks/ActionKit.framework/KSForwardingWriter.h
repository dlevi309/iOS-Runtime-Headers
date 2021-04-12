/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)close;
-(void)writeString:(id)arg1 ;
-(void)dealloc;
-(id)initWithOutputWriter:(id)arg1 ;
@end

