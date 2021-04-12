/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITextDropRequest_Private.h>
#import <UIKit/UITextDropRequest.h>
@class UITextPosition, UITextDropProposal;


@protocol UITextDropRequest <NSObject>
@property (nonatomic,readonly) UITextPosition * dropPosition; 
@property (nonatomic,readonly) UITextDropProposal * suggestedProposal; 
@property (getter=isSameView,nonatomic,readonly) BOOL sameView; 
@property (nonatomic,readonly) id<UIDropSession> dropSession; 
@required
-(id<UIDropSession>)dropSession;
-(UITextDropProposal *)suggestedProposal;
-(UITextPosition *)dropPosition;
-(BOOL)isSameView;

@end


@protocol UIDropSession;
@class UITextRange, UITextPosition, UITextDropProposal, NSString;

@interface UITextDropRequest : NSObject <UITextDropRequest_Private, UITextDropRequest> {

	BOOL _sameView;
	id<UIDropSession> _dropSession;
	UITextPosition* _dropPosition;
	UITextRange* _dropRange;
	UITextDropProposal* _suggestedProposal;

}

@property (nonatomic,retain) UITextDropProposal * suggestedProposal;              //@synthesize suggestedProposal=_suggestedProposal - In the implementation block
@property (assign,getter=isSameView,nonatomic) BOOL sameView;                     //@synthesize sameView=_sameView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITextPosition * dropPosition;                     //@synthesize dropPosition=_dropPosition - In the implementation block
@property (nonatomic,readonly) id<UIDropSession> dropSession;                     //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,readonly) UITextRange * dropRange;                           //@synthesize dropRange=_dropRange - In the implementation block
-(id<UIDropSession>)dropSession;
-(UITextRange *)dropRange;
-(UITextDropProposal *)suggestedProposal;
-(id)initWithPosition:(id)arg1 range:(id)arg2 inSession:(id)arg3 ;
-(void)setSameView:(BOOL)arg1 ;
-(void)setSuggestedProposal:(UITextDropProposal *)arg1 ;
-(UITextPosition *)dropPosition;
-(BOOL)isSameView;
@end

