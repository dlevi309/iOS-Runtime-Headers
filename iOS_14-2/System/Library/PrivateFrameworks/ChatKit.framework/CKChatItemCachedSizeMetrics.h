/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, IMDoubleLinkedListNode;

@interface CKChatItemCachedSizeMetrics : NSObject <NSSecureCoding> {

	NSString* _chatItemGUID;
	NSString* _key;
	NSDate* _lastAccess;
	IMDoubleLinkedListNode* _node;
	CGSize _size;
	UIEdgeInsets _textAlignmentInsets;

}

@property (nonatomic,retain) NSString * chatItemGUID;                       //@synthesize chatItemGUID=_chatItemGUID - In the implementation block
@property (nonatomic,retain) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) CGSize size;                                   //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textAlignmentInsets;              //@synthesize textAlignmentInsets=_textAlignmentInsets - In the implementation block
@property (nonatomic,retain) NSDate * lastAccess;                           //@synthesize lastAccess=_lastAccess - In the implementation block
@property (nonatomic,retain) IMDoubleLinkedListNode * node;                 //@synthesize node=_node - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textAlignmentInsets;
-(NSDate *)lastAccess;
-(void)setLastAccess:(NSDate *)arg1 ;
-(void)setChatItemGUID:(NSString *)arg1 ;
-(IMDoubleLinkedListNode *)node;
-(NSString *)chatItemGUID;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setNode:(IMDoubleLinkedListNode *)arg1 ;
-(id)description;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

