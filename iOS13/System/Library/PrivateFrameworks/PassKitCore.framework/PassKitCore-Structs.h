/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

typedef struct _NSZone* NSZoneRef;

typedef struct _BOMCopier* BOMCopierRef;

typedef struct PKEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} PKEdgeInsets;

typedef struct CGImage* CGImageRef;

typedef struct CGContext* CGContextRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	unsigned field1[8];
} SCD_Struct_PK6;

typedef struct {
	unsigned protocolVersion : 1;
	unsigned shouldAdvertise : 1;
} SCD_Struct_PK7;

typedef struct CGColor* CGColorRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	BOOL field1;
	BOOL field2;
} SCD_Struct_PK11;

typedef struct {
	unsigned defaultPaymentInstrumentIndex : 1;
	unsigned nearby : 1;
	unsigned protocolVersion : 1;
	unsigned deviceDisabled : 1;
	unsigned locked : 1;
	unsigned supportsFaceID : 1;
	unsigned userDisabled : 1;
} SCD_Struct_PK12;

typedef struct {
	unsigned status : 1;
} SCD_Struct_PK13;

typedef struct __SecTrust* SecTrustRef;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned ingestedDate : 1;
	unsigned peerPaymentAccountBalance : 1;
	unsigned peerPaymentAccountState : 1;
	unsigned hasAssociatedPeerPaymentAccount : 1;
	unsigned supportsAutomaticSelection : 1;
} SCD_Struct_PK17;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGPath* CGPathRef;

typedef struct CGDataProvider* CGDataProviderRef;

typedef struct {
	unsigned inAppPINRequiredAmount : 1;
	unsigned inAppPriority : 1;
	unsigned paymentNetworkIdentifier : 1;
	unsigned paymentType : 1;
	unsigned state : 1;
	unsigned auxiliary : 1;
	unsigned inAppPINRequired : 1;
	unsigned supportsContactlessPayment : 1;
	unsigned supportsInAppPayment : 1;
} SCD_Struct_PK21;

typedef struct __SecTask* SecTaskRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct __SecAccessControl* SecAccessControlRef;

typedef struct objc_property* objc_propertyRef;

