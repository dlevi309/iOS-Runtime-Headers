/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSCopying;
@class NSDate, NSNumber;

@interface __ItemHolder : NSObject {

	id<NSCopying> _key;
	id _item;
	NSDate* _lastTimeUsed;
	NSNumber* _version;

}

@property (nonatomic,retain) id<NSCopying> key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id item;                            //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeUsed;              //@synthesize lastTimeUsed=_lastTimeUsed - In the implementation block
@property (nonatomic,retain) NSNumber * version;                 //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(id)description;
-(id<NSCopying>)key;
-(id)item;
-(void)setItem:(id)arg1 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(void)setKey:(id<NSCopying>)arg1 ;
-(void)touch;
-(id)initWithItem:(id)arg1 key:(id)arg2 ;
-(NSDate *)lastTimeUsed;
-(void)setLastTimeUsed:(NSDate *)arg1 ;
@end

