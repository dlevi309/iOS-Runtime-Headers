/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/


@class NSMutableString, NSMutableDictionary;

@interface PBTextWriter : NSObject {

	BOOL _newlinesPrinted;
	long long _indent;
	NSMutableString* _dest;
	NSMutableDictionary* _cachedObjectTypes;

}
-(id)init;
-(BOOL)write:(id)arg1 ;
-(void)reset;
-(id)string;
-(void)dealloc;
@end

