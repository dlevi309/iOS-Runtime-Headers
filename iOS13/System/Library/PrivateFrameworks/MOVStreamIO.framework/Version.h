/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@class NSString;

@interface Version : NSObject {

	unsigned _major;
	unsigned _minor;
	unsigned _bugfix;
	NSString* _modifier;

}

@property (readonly) unsigned major;                   //@synthesize major=_major - In the implementation block
@property (readonly) unsigned minor;                   //@synthesize minor=_minor - In the implementation block
@property (readonly) unsigned bugfix;                  //@synthesize bugfix=_bugfix - In the implementation block
@property (readonly) NSString * modifier;              //@synthesize modifier=_modifier - In the implementation block
-(id)init;
-(id)description;
-(NSString *)modifier;
-(unsigned)major;
-(unsigned)minor;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(id)initWithVersionString:(id)arg1 ;
-(long long)compareToVersion:(id)arg1 ;
-(BOOL)isAllDigitsInString:(id)arg1 ;
-(unsigned)bugfix;
-(id)getVersionAsString;
@end

