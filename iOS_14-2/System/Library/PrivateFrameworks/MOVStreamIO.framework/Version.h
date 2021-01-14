/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)modifier;
-(unsigned)minor;
-(id)description;
-(unsigned)bugfix;
-(unsigned)major;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(long long)compareToVersion:(id)arg1 ;
-(id)initWithVersionString:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAllDigitsInString:(id)arg1 ;
-(id)getVersionAsString;
@end

