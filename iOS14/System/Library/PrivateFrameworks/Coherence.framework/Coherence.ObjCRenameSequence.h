/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/


#import <Coherence/Coherence-Structs.h>
@class NSString;

@interface Coherence.ObjCRenameSequence : NSObject {

	 renameSequence;
	 renameAddedBySequence;

}

@property (readonly,nonatomic) BOOL isEmpty; 
@property (readonly,nonatomic) NSString * description; 
-(id)init;
-(NSString *)description;
-(BOOL)isEmpty;
-(void)addWithReplica:(id)arg1 range:(NSRange)arg2 ;
-(void)addAddedByReplica:(id)arg1 range:(NSRange)arg2 ;
-(void)addAddedByVersion:(id)arg1 ;
@end

