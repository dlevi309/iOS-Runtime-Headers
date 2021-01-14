/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRemoteExecutionEvent : WFEvent {

	BOOL _completed;
	NSString* _key;
	NSString* _source;
	NSString* _actionIdentifier;
	NSString* _destinationType;
	NSString* _connectionType;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * destinationType;               //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,copy) NSString * connectionType;                //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL completed;                         //@synthesize completed=_completed - In the implementation block
+(Class)codableEventClass;
-(NSString *)connectionType;
-(void)setConnectionType:(NSString *)arg1 ;
-(NSString *)destinationType;
-(BOOL)completed;
-(void)setDestinationType:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)actionIdentifier;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)source;
@end

