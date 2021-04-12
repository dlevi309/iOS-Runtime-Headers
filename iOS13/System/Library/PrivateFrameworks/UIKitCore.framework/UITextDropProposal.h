/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDropProposal.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UITextDropProposal : UIDropProposal <NSCopying> {

	BOOL _useFastSameViewOperations;
	unsigned long long _dropAction;
	unsigned long long _dropProgressMode;
	unsigned long long _dropPerformer;

}

@property (assign,nonatomic) unsigned long long dropAction;                    //@synthesize dropAction=_dropAction - In the implementation block
@property (assign,nonatomic) unsigned long long dropProgressMode;              //@synthesize dropProgressMode=_dropProgressMode - In the implementation block
@property (assign,nonatomic) BOOL useFastSameViewOperations;                   //@synthesize useFastSameViewOperations=_useFastSameViewOperations - In the implementation block
@property (assign,nonatomic) unsigned long long dropPerformer;                 //@synthesize dropPerformer=_dropPerformer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(void)setUseFastSameViewOperations:(BOOL)arg1 ;
-(unsigned long long)dropAction;
-(unsigned long long)dropPerformer;
-(BOOL)useFastSameViewOperations;
-(unsigned long long)dropProgressMode;
-(void)setDropAction:(unsigned long long)arg1 ;
-(void)setDropProgressMode:(unsigned long long)arg1 ;
-(void)setDropPerformer:(unsigned long long)arg1 ;
@end

