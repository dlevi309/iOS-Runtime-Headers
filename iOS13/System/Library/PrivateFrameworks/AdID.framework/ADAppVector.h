/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <AdID/AdID-Structs.h>
#import <AdCore/ADVector.h>

@interface ADAppVector : ADVector {

	unsigned _adamID;

}

@property (nonatomic,readonly) unsigned adamID;              //@synthesize adamID=_adamID - In the implementation block
-(id)description;
-(id)data;
-(unsigned)adamID;
-(id)initWithVersion:(id)arg1 header:(ADAppVectorHeader*)arg2 floats:(float*)arg3 ;
-(id)initWithString:(id)arg1 version:(id)arg2 ;
@end

