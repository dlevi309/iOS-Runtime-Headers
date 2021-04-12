/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSString;

@interface CNHeapObject : NSObject {

	NSString* _className;
	NSString* _binary;
	unsigned long long _count;
	unsigned long long _bytes;

}

@property (nonatomic,retain) NSString * className;                  //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSString * binary;                     //@synthesize binary=_binary - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long bytes;              //@synthesize bytes=_bytes - In the implementation block
-(void)setCount:(unsigned long long)arg1 ;
-(NSString *)binary;
-(unsigned long long)bytes;
-(NSString *)className;
-(unsigned long long)count;
-(id)description;
-(void)setClassName:(NSString *)arg1 ;
-(void)setBytes:(unsigned long long)arg1 ;
-(id)classAndBinaryKey;
-(void)setBinary:(NSString *)arg1 ;
@end

