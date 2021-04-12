/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection
*/

#import <BrookDataCollection/BRKWriter.h>
#import <libobjc.A.dylib/BRKEmbeddingsWriter.h>

@protocol BRKEmbeddingsWriter <NSObject>
@required
-(void)close;
-(void)writeEmbedding:(id)arg1;

@end


@class NSString;

@interface BRKEmbeddingsWriter : BRKWriter <BRKEmbeddingsWriter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)_lock_writeEmbedding:(id)arg1 ;
-(void)_lock_writeMultiArray:(id)arg1 ;
-(void)writeEmbedding:(id)arg1 ;
@end

