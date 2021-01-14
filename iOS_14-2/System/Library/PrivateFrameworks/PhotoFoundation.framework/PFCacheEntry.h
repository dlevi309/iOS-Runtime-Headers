/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)touch;
-(unsigned long long)createTime;
-(unsigned long long)lastReadTime;
-(id)description;
-(id)key;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)readCount;
-(id)value;
@end

