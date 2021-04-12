/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol NSCopyingNSObject;
@interface PFCacheEntry : NSObject {

	id<NSCopying><NSObject> _key;
	id _value;
	unsigned long long _createTime;
	unsigned long long _lastReadTime;
	unsigned long long _readCount;

}
-(id)description;
-(id)key;
-(id)value;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)readCount;
-(void)touch;
-(unsigned long long)createTime;
-(unsigned long long)lastReadTime;
@end

