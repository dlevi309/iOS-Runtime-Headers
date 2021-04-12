/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

