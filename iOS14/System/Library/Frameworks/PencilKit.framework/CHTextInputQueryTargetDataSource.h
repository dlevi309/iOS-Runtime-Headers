/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class NSArray;


@protocol CHTextInputQueryTargetDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * textInputTargets; 
@optional
-(id)textInputTargetForItemStableIdentifier:(id)arg1 strokeIdentifiers:(id)arg2 simultaneousItemStableIdentifiers:(id)arg3;

@required
-(NSArray *)textInputTargets;
-(id)textInputTargetForItemStableIdentifier:(id)arg1 strokeIdentifiers:(id)arg2;
-(void)fetchContentInfoForTextInputTarget:(id)arg1 strokeIdentifiers:(id)arg2 completion:(/*^block*/id)arg3;

@end

