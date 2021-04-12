/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@protocol RestrictionProtocol;
@class NSObject;

@interface cRestrictionArray : NSObject {

	BOOL _isPresent;
	NSObject*<RestrictionProtocol> _restriction;

}

@property (readonly) BOOL isPresent;                                        //@synthesize isPresent=_isPresent - In the implementation block
@property (retain) NSObject*<RestrictionProtocol> restriction;              //@synthesize restriction=_restriction - In the implementation block
-(id)init;
-(BOOL)isPresent;
-(NSObject*<RestrictionProtocol>)restriction;
-(void)setRestriction:(NSObject*<RestrictionProtocol>)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithRestriction:(id)arg1 ;
@end

