/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/DAEAS-Structs.h>
#import <libobjc.A.dylib/ASParsingLeafNode.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {

	NSDate* _exceptionDate;
	NSString* _uidWithoutExceptionDate;
	BOOL _isOutlookCreatedUid;

}
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)parsingState;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(id)uidForCalFramework;
-(id)recurrenceIDForResponseEmail;
-(id)initWithCalFrameworkString:(id)arg1 ;
-(id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg1 withTimeZone:(id)arg2 ;
-(id)uidFromGlobalObjId:(id)arg1 outIsOutlookCreatedUid:(BOOL*)arg2 ;
-(id)initWithGlobalObjectIdString:(id)arg1 ;
-(id)initWithUidString:(id)arg1 ;
-(id)uidForResponseEmailWithTimeZone:(id)arg1 ;
-(id)uidWithoutExceptionDate;
-(id)uidForActiveSyncWithTimeZone:(id)arg1 ;
-(id)exceptionDate;
-(void)setExceptionDate:(id)arg1 ;
@end

